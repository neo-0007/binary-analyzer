
bool FUN_00598950(undefined8 param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = *param_2;
  puVar5 = *(undefined1 **)(param_2 + 2);
  do {
    if (iVar3 <= iVar6) {
      iVar3 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
      return iVar3 == 1;
    }
    if (((uint)(iVar6 * 0x38e38e39) >> 1 | (uint)((iVar6 * 0x38e38e39 & 1U) != 0) << 0x1f) <
        0xe38e38f) {
      if ((iVar6 != 0) && (iVar2 = FUN_004ab7e0(param_1,&DAT_008243ea,1), iVar2 < 1)) {
        return false;
      }
      iVar2 = FUN_004abce0(param_1,param_3,param_3);
      if (iVar2 < 1) {
        return false;
      }
    }
    iVar6 = iVar6 + 1;
    uVar1 = *puVar5;
    pcVar4 = ":";
    if (iVar6 == iVar3) {
      pcVar4 = "";
    }
    puVar5 = puVar5 + 1;
    iVar2 = FUN_004ae9e0(param_1,"%02x%s",uVar1,pcVar4);
  } while (0 < iVar2);
  return false;
}

