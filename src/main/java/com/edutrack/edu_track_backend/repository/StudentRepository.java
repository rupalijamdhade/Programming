package com.edutrack.backend.repository;

import com.edutrack.backend.entity.StudentEntity;
import org.springframework.data.mongodb.repository.MongoRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface StudentRepository extends MongoRepository<StudentEntity, String> {
    // Gives you all basic MongoDB operations for students
}
