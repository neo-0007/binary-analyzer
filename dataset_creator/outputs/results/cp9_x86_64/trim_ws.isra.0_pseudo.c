
void trim_ws_isra_0(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = param_2;
  while ((*pcVar1 < '\0' || ((*(byte *)(param_1 + (long)*pcVar1 * 2) & 8) == 0))) {
    pcVar1 = pcVar1 + 1;
  }
  pcVar1 = pcVar1 + -1;
  if (param_2 <= pcVar1) {
    do {
      if ((*pcVar1 < '\0') || ((*(byte *)(param_1 + (long)*pcVar1 * 2) & 0x10) == 0)) break;
      pcVar1 = pcVar1 + -1;
    } while (pcVar1 != param_2 + -1);
  }
  pcVar1[1] = '\0';
  return;
}

