#include "unity.h"
#include "Mutation.h"
#include "ExamStruct.h"

void setUp(void)
{
}

void tearDown(void)
{
}

LinkedList *exams1, *exams2, *exams3, *exams4, *exams5, *exams6;

void test_(void){
  
  Day days[] = {
                    { .examsAM = exams1, .examsPM = exams2},
                    { .examsAM = exams3, .examsPM = exams4},
                    { .examsAM = exams5, .examsPM = exams6},
               };
        
   MutateInTable(days);
}

