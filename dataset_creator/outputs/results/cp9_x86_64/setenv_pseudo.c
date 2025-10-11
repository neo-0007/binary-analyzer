
int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  
  if ((__name != (char *)0x0) && (*__name != '\0')) {
    pcVar2 = strchr(__name,0x3d);
    if (pcVar2 == (char *)0x0) {
      iVar1 = __add_to_environ(__name,__value,0,__replace);
      return iVar1;
    }
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return -1;
}

