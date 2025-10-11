
long FUN_0053d4f0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (((lVar4 == 0) || (lVar1 = *(long *)(param_1 + 0x60), lVar1 == param_2)) ||
       ((*(int *)(lVar1 + 4) == *(int *)(param_2 + 4) &&
        (*(long *)(lVar1 + 0x18) == *(long *)(param_2 + 0x18))))) goto LAB_0053d650;
    iVar2 = FUN_004222a0(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 != 0) {
      if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x80)) {
        plVar5 = (long *)FUN_0053d380(param_1,param_2);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        if ((plVar5 != (long *)0x0) && (*plVar5 != 0)) {
          lVar4 = plVar5[1];
          FUN_004222e0(uVar3);
          goto LAB_0053d650;
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x38);
      }
      FUN_004222e0(uVar3);
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(long *)(lVar4 + 200) != 0) {
        uVar3 = FUN_0053e710(param_2);
        iVar2 = FUN_0053e720(lVar4,uVar3);
        if (iVar2 != 0) {
          local_28 = 0x87;
          local_30 = 0;
          local_38 = param_2;
          iVar2 = FUN_0053d2c0(param_1,0x87,FUN_0053d1c0,&local_38);
          if (iVar2 != 0) {
            iVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 0x38));
            if (iVar2 != 0) {
              lVar4 = FUN_0053d380(param_1,param_2);
              if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
                FUN_004222e0(*(undefined8 *)(param_1 + 0x38));
                FUN_0053e7e0(param_2,local_30);
                goto LAB_0053d650;
              }
              if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x80)) {
                FUN_0053d300(param_1,0);
              }
              iVar2 = FUN_0053d3f0(param_1,param_2,local_30);
              if (iVar2 != 0) {
                *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
                FUN_004222e0(*(undefined8 *)(param_1 + 0x38));
                lVar4 = local_30;
                goto LAB_0053d650;
              }
              FUN_004222e0(*(undefined8 *)(param_1 + 0x38));
            }
            lVar4 = 0;
            FUN_0053e7e0(param_2,local_30);
            goto LAB_0053d650;
          }
        }
      }
    }
  }
  lVar4 = 0;
LAB_0053d650:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

