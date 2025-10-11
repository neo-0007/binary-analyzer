
void FUN_005c9a60(long param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*param_2;
  if (-1 < (char)*param_2) {
LAB_005c9a70:
    do {
      uVar1 = *(ushort *)(*(long *)(param_1 + 8) + uVar3 * 2);
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x307) == 0) {
          if (*(int *)(param_1 + 0x18) == 0) {
            return;
          }
          if ((uVar1 & 0x1000) == 0) {
            return;
          }
        }
        bVar2 = param_2[1];
        param_2 = param_2 + 1;
      }
      else {
        bVar2 = param_2[1];
        uVar3 = (ulong)bVar2;
        if ((-1 < (char)bVar2) &&
           ((*(byte *)(*(long *)(param_1 + 8) + (long)(char)bVar2 * 2) & 8) != 0)) {
          param_2 = param_2 + 1;
          goto LAB_005c9a70;
        }
        bVar2 = param_2[2];
        param_2 = param_2 + 2;
      }
      uVar3 = (ulong)bVar2;
    } while (-1 < (char)bVar2);
  }
  return;
}

