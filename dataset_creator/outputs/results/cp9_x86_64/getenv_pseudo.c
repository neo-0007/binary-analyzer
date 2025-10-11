
char * getenv(char *__name)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  short *psVar5;
  
  puVar4 = environ;
  if ((environ == (undefined8 *)0x0) || (*__name == '\0')) {
    psVar5 = (short *)0x0;
  }
  else if (__name[1] == '\0') {
    psVar5 = (short *)*environ;
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)0x0;
    }
    else {
      do {
        if (CONCAT11(0x3d,*__name) == *psVar5) {
          return (char *)(psVar5 + 1);
        }
        psVar5 = (short *)puVar4[1];
        puVar4 = puVar4 + 1;
      } while (psVar5 != (short *)0x0);
    }
  }
  else {
    sVar3 = strlen(__name);
    psVar5 = (short *)*puVar4;
    sVar1 = *(short *)__name;
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)0x0;
    }
    else {
      do {
        if (((sVar1 == *psVar5) &&
            (iVar2 = strncmp((char *)(psVar5 + 1),__name + 2,sVar3 - 2), iVar2 == 0)) &&
           (*(char *)((long)psVar5 + sVar3) == '=')) {
          return (char *)((long)psVar5 + sVar3 + 1);
        }
        psVar5 = (short *)puVar4[1];
        puVar4 = puVar4 + 1;
      } while (psVar5 != (short *)0x0);
    }
  }
  return (char *)psVar5;
}

