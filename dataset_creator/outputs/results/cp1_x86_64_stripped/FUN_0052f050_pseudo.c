
ulong FUN_0052f050(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004098f0();
  if (*(int *)(lVar2 + 0x118) != 0) {
    if (*(int *)(lVar2 + 0x130) < 0) {
      if ((param_3 == (undefined8 *)0x0) && (uVar3 = 0, param_2 != (undefined8 *)0x0))
      goto LAB_0052f2a0;
      if (*(int *)(lVar2 + 0x11c) != 0) {
        lVar4 = lVar2 + 0x138;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = FUN_0054c690(lVar4,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128)),param_4)
            ;
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x124) = 1;
              uVar3 = param_4 & 0xffffffff;
              goto LAB_0052f2a0;
            }
          }
          else if ((*(int *)(lVar2 + 0x124) != 0) || (param_4 == 0)) {
            FUN_0054c7c0(lVar4,param_3,param_4);
            uVar3 = param_4 & 0xffffffff;
            goto LAB_0052f2a0;
          }
        }
        else {
          iVar1 = FUN_004098b0(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x120) != 0)) {
            if (*(int *)(lVar2 + 0x124) == 0) {
              iVar1 = FUN_0054c690(lVar4,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128)),
                                   param_4);
              if (iVar1 != 0) goto LAB_0052f29b;
              *(undefined4 *)(lVar2 + 0x124) = 1;
            }
            iVar1 = FUN_004098b0(param_1);
            if (iVar1 == 0) {
              if (*(long *)(lVar2 + 0x170) == 0) {
                iVar1 = FUN_0054cc70(lVar4,param_3,param_2,param_4);
              }
              else {
                iVar1 = FUN_0054d290();
              }
              if (iVar1 == 0) {
                lVar4 = FUN_0054d5c0(lVar4,local_58,(long)*(int *)(lVar2 + 300));
                if (lVar4 == 0) goto LAB_0052f373;
                iVar1 = *(int *)(lVar2 + 300);
                uVar6 = FUN_00409fc0(param_1);
                iVar1 = FUN_00422820(local_58,uVar6,(long)iVar1);
                if ((iVar1 != 0) || (uVar3 = param_4 & 0xffffffff, (int)param_4 == -1))
                goto LAB_0052f373;
              }
              else {
LAB_0052f373:
                FUN_004227b0(param_2,param_4);
                uVar3 = 0xffffffff;
              }
              *(undefined4 *)(lVar2 + 0x11c) = 0;
              *(undefined8 *)(lVar2 + 0x120) = 0;
              goto LAB_0052f2a0;
            }
            if (*(long *)(lVar2 + 0x170) == 0) {
              iVar1 = FUN_0054c960();
            }
            else {
              iVar1 = FUN_0054cf40();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x120) = 1;
              goto LAB_0052f16d;
            }
          }
        }
      }
    }
    else {
      lVar4 = FUN_004098f0(param_1);
      lVar2 = lVar4 + 0x138;
      if ((param_3 == param_2) && ((long)*(int *)(lVar4 + 300) + 8U <= param_4)) {
        iVar1 = FUN_004098b0(param_1);
        if (iVar1 != 0) {
          puVar5 = (undefined8 *)FUN_00409fc0(param_1);
          *param_3 = *puVar5;
        }
        *(undefined8 *)(param_1 + 0x2c) = *param_3;
        param_4 = param_4 - (long)(*(int *)(lVar4 + 300) + 8);
        iVar1 = FUN_0054c690(lVar2,param_1 + 0x28,(long)(0xf - *(int *)(lVar4 + 0x128)),param_4);
        if (iVar1 == 0) {
          iVar1 = *(int *)(lVar4 + 0x130);
          param_2 = param_2 + 1;
          uVar6 = FUN_00409fc0(param_1);
          FUN_0054c7c0(lVar2,uVar6,(long)iVar1);
          iVar1 = FUN_004098b0(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar4 + 0x170) == 0) {
              iVar1 = FUN_0054cc70();
            }
            else {
              iVar1 = FUN_0054d290();
            }
            if (iVar1 == 0) {
              lVar2 = FUN_0054d5c0(lVar2,local_58,(long)*(int *)(lVar4 + 300));
              if ((lVar2 != 0) &&
                 (iVar1 = FUN_00422820(local_58,(long)(param_3 + 1) + param_4,
                                       (long)*(int *)(lVar4 + 300)), iVar1 == 0)) {
LAB_0052f16d:
                uVar3 = param_4 & 0xffffffff;
                goto LAB_0052f2a0;
              }
            }
            FUN_004227b0(param_2,param_4);
          }
          else {
            if (*(long *)(lVar4 + 0x170) == 0) {
              iVar1 = FUN_0054c960(lVar2,param_3 + 1,param_2,param_4);
            }
            else {
              iVar1 = FUN_0054cf40();
            }
            if ((iVar1 == 0) &&
               (lVar2 = FUN_0054d5c0(lVar2,(long)param_2 + param_4,(long)*(int *)(lVar4 + 300)),
               lVar2 != 0)) {
              uVar3 = (ulong)(uint)(*(int *)(lVar4 + 300) + 8 + (int)param_4);
              goto LAB_0052f2a0;
            }
          }
        }
      }
    }
  }
LAB_0052f29b:
  uVar3 = 0xffffffff;
LAB_0052f2a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

