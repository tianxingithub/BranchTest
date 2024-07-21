#pragma once

#include <mongocxx/instance.hpp>
#include <mongocxx/pool.hpp>
#include <qxorm/QxOrm.h>

class MongoConnectionPool {
public:
    static MongoConnectionPool& getInstance() {
        static MongoConnectionPool instance;
        return instance;
    }

    mongocxx::pool::entry getConnection() {
        return pool.acquire();
    }

private:
    MongoConnectionPool() : pool(mongocxx::uri{"mongodb://localhost:27017"}) {}

    mongocxx::pool pool;

    MongoConnectionPool(const MongoConnectionPool&) = delete;
    MongoConnectionPool& operator=(const MongoConnectionPool&) = delete;
};

class QxOrmConnectionPoolConfig {
public:
    static void initialize() {
        if (!initialized) {
            qx::QxOrm::initMongoDB();
            mongocxx::instance instance{};  // Initialize the MongoDB driver instance
            MongoConnectionPool::getInstance();  // Ensure connection pool is created
            initialized = true;
        }
    }

private:
    static bool initialized;
};
