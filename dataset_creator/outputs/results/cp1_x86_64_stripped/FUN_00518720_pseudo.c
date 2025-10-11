
void FUN_00518720(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)((long)param_2 + 0x2c) != 0) {
    return;
  }
  *(undefined4 *)((long)param_2 + 0x2c) = 1;
  if (*param_2 != 0) {
    iVar1 = FUN_00436480();
    if ((long)iVar1 != 0) {
      uVar6 = 0;
      do {
        uVar3 = FUN_004364a0(*param_2,uVar6 & 0xffffffff);
        lVar4 = FUN_00518090(param_1);
        uVar5 = thunk_FUN_00420cb0(lVar4);
        if ((param_2[3] == lVar4) == (bool)(*(byte *)(param_2 + 5) & 1)) {
          iVar2 = FUN_00518200(param_1,uVar3);
          if (iVar2 != 0) {
            if (*(code **)(param_1 + 0x68) != (code *)0x0) {
              iVar2 = (**(code **)(param_1 + 0x68))(uVar5,*(undefined4 *)param_2[4]);
              if (iVar2 == 0) goto LAB_00518770;
            }
            if ((lVar4 == param_2[3]) || (*(long *)(param_1 + 0x78) != 0)) {
              iVar2 = FUN_00516770(param_2[4],param_1);
              if (iVar2 != 0) break;
            }
          }
        }
LAB_00518770:
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
    }
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
  }
  return;
}

