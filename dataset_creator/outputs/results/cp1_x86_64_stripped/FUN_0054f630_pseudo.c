
void FUN_0054f630(long param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  FUN_0054f480(param_1,0,0);
  uVar2 = 0x10;
  if (param_3 < 0x11) {
    uVar2 = param_3;
  }
  uVar3 = (uint)uVar2;
  if (uVar3 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar3 != 0) &&
         (*(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x40), (uVar2 & 2) != 0)) {
        *(undefined2 *)((long)param_2 + ((uVar2 & 0xffffffff) - 2)) =
             *(undefined2 *)(param_1 + 0x3e + (uVar2 & 0xffffffff));
      }
    }
    else {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)((long)param_2 + ((uVar2 & 0xffffffff) - 4)) =
           *(undefined4 *)(param_1 + 0x3c + (uVar2 & 0xffffffff));
    }
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((long)param_2 + ((uVar2 & 0xffffffff) - 8)) =
         *(undefined8 *)(param_1 + 0x38 + (uVar2 & 0xffffffff));
    lVar4 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    uVar3 = uVar3 + (int)lVar4 & 0xfffffff8;
    if (7 < uVar3) {
      uVar1 = 0;
      do {
        uVar2 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar2) =
             *(undefined8 *)(((param_1 + 0x40) - lVar4) + uVar2);
      } while (uVar1 < uVar3);
      return;
    }
  }
  return;
}

