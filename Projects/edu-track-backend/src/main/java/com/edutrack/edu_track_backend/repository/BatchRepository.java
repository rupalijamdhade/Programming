package com.edutrack.backend.repository;

import com.edutrack.backend.entity.BatchEntity;
import org.springframework.data.mongodb.repository.MongoRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface BatchRepository extends MongoRepository<BatchEntity, String> {
    // No extra code needed, MongoRepository gives us:
    // findAll(), findById(), save(), deleteById() etc.
}
