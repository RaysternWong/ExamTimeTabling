#ifndef SetElements_H
#define SetElements_H
#include "ExamStruct.h"

void setVenue(Venue *target, char *name, int venueCode, int seatNum);
void setProgramme(Programme *target ,char *programmeName, int numStudent);
void setPaper(Paper *target ,char *paperCode);
void setPaperWithPopulation(Paper *target ,char *paperCode, int num);
void addProgrammeToPaper(Paper *target, Programme *programme);

Session createSession();
void addPaperToSession(Session *target, Paper *paper);
void addPapersToSession(Session *target, LinkedList *papers);
Table createTable();
void addSessionToTable(Table *target, Session *session);

#endif // SetElements_H
