
undefined8 __libc_ns_makecanon(char *param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  size_t sVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  sVar2 = strlen(param_1);
  if (param_3 < sVar2 + 2) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
    uVar5 = 0xffffffff;
  }
  else {
    puVar3 = (undefined1 *)memcpy(param_2,param_1,sVar2 + 1);
    if (sVar2 == 0) {
      lVar6 = 1;
    }
    else {
      pcVar4 = param_2 + (sVar2 - 1);
      cVar1 = *pcVar4;
      while (cVar1 == '.') {
        if (sVar2 == 1) {
          *pcVar4 = '\0';
          lVar6 = 1;
          puVar3 = param_2;
          goto LAB_007bfa85;
        }
        if (pcVar4[-1] == '\\') {
          if (sVar2 == 2) {
            lVar6 = 3;
            puVar3 = param_2 + 2;
            goto LAB_007bfa85;
          }
          if (pcVar4[-2] != '\\') break;
        }
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + -1;
        sVar2 = sVar2 - 1;
        cVar1 = *pcVar4;
      }
      lVar6 = sVar2 + 1;
      puVar3 = param_2 + sVar2;
    }
LAB_007bfa85:
    *puVar3 = 0x2e;
    uVar5 = 0;
    param_2[lVar6] = 0;
  }
  return uVar5;
}

