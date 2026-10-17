package com.edutrack.backend.service;

import com.edutrack.backend.entity.StudentEntity;
import com.edutrack.backend.repository.StudentRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import java.util.List;
import java.util.Optional;

@Service
public class StudentService {

    @Autowired
    private StudentRepository studentRepository;

    // Get all students
    public List<StudentEntity> getAllStudents() {
        return studentRepository.findAll();
    }

    // Add a new student
    public StudentEntity addStudent(StudentEntity student) {
        return studentRepository.save(student);
    }

    // Delete a student by id
    public void deleteStudent(String id) {
        studentRepository.deleteById(id);
    }

    // Get a student by id
    public Optional<StudentEntity> getStudentById(String id) {
        return studentRepository.findById(id);
    }
}
