/* $Id$ */

#ifndef STRINGS_H
#define STRINGS_H

char *InlineString(char *buf, uint16 string);
char *GetString(char *buffr, uint16 string, const char* last);

extern char _userstring[128];

void InjectDParam(int amount);
int32 GetParamInt32();

#endif /* STRINGS_H */
