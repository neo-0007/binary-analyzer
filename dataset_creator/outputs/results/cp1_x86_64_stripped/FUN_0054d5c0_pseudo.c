
ulong FUN_0054d5c0(byte *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (*param_1 >> 3 & 7) * 2 + 2;
  uVar5 = (ulong)uVar1;
  if (uVar5 == param_3) {
    if (uVar1 < 8) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 != 0) && (*param_2 = param_1[0x10], (uVar1 & 2) != 0)) {
          *(undefined2 *)(param_2 + (uVar5 - 2)) = *(undefined2 *)(param_1 + uVar5 + 0xe);
        }
      }
      else {
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_2 + (uVar5 - 4)) = *(undefined4 *)(param_1 + uVar5 + 0xc);
      }
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + (uVar5 - 8)) = *(undefined8 *)(param_1 + uVar5 + 8);
      lVar3 = (long)param_2 - ((ulong)(param_2 + 8) & 0xfffffffffffffff8);
      uVar1 = uVar1 + (int)lVar3 & 0xfffffff8;
      if (7 < uVar1) {
        uVar2 = 0;
        do {
          uVar4 = (ulong)uVar2;
          uVar2 = uVar2 + 8;
          *(undefined8 *)(((ulong)(param_2 + 8) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)(param_1 + uVar4 + (0x10 - lVar3));
        } while (uVar2 < uVar1);
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

