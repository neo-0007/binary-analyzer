
undefined8 FUN_007c9350(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  lVar2 = thunk_FUN_007129d0();
  if (param_3 < lVar2 + 2U) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
    uVar5 = 0xffffffff;
  }
  else {
    puVar3 = (undefined1 *)thunk_FUN_00713a50(param_2,param_1,lVar2 + 1);
    if (lVar2 == 0) {
      lVar6 = 1;
    }
    else {
      pcVar4 = param_2 + lVar2 + -1;
      cVar1 = *pcVar4;
      while (cVar1 == '.') {
        if (lVar2 == 1) {
          *pcVar4 = '\0';
          lVar6 = 1;
          puVar3 = param_2;
          goto LAB_007c93c5;
        }
        if (pcVar4[-1] == '\\') {
          if (lVar2 == 2) {
            lVar6 = 3;
            puVar3 = param_2 + 2;
            goto LAB_007c93c5;
          }
          if (pcVar4[-2] != '\\') break;
        }
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + -1;
        lVar2 = lVar2 + -1;
        cVar1 = *pcVar4;
      }
      lVar6 = lVar2 + 1;
      puVar3 = param_2 + lVar2;
    }
LAB_007c93c5:
    *puVar3 = 0x2e;
    uVar5 = 0;
    param_2[lVar6] = 0;
  }
  return uVar5;
}

