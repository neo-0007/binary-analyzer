
bool FUN_00478670(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  pcVar2 = (char *)(lVar1 + 0x34);
  do {
    if (*pcVar2 != '\0') {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0x54));
  do {
    if (*pcVar2 != '\0') {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 100));
  do {
    if (*pcVar2 != '\0') {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0x74));
  pcVar2 = (char *)(lVar1 + 0x80);
  do {
    if (*pcVar2 != '\0') {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0xb0));
  return *(long *)(lVar1 + 0x78) == 0;
}

