
int * FUN_007aa530(code *param_1,long *param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  int *local_58;
  long local_48;
  long local_40;
  
  lVar2 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0xffffffff;
  uStack_90 = 0;
  local_48 = lVar2;
  local_58 = (int *)(*param_1)(&local_48,param_3);
  if (local_58 == (int *)0x0) {
    if (((*(int *)(in_FS_OFFSET + -0x58) == 0x4b) &&
        (lVar4 = (ulong)((uint)lVar2 & 1) + (lVar2 >> 1), lVar2 != lVar4)) && (lVar4 != 0)) {
      lVar3 = 0;
      do {
        local_48 = lVar4;
        lVar1 = (*param_1)(&local_48,param_3);
        if (lVar1 == 0) {
          lVar2 = lVar4;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0x4b) goto LAB_007aa596;
        }
        else {
          local_6c = param_3[8];
          local_98 = *(undefined8 *)param_3;
          uStack_90 = *(undefined8 *)(param_3 + 2);
          local_88 = *(undefined8 *)(param_3 + 4);
          uStack_80 = *(undefined8 *)(param_3 + 6);
          local_68 = *(undefined8 *)(param_3 + 10);
          local_60 = *(undefined8 *)(param_3 + 0xc);
          lVar3 = lVar4;
        }
        lVar4 = (lVar3 >> 1) + (lVar2 >> 1) + (ulong)(((uint)lVar3 | (uint)lVar2) & 1);
      } while ((lVar4 != lVar3) && (lVar4 != lVar2));
      if (-1 < (int)local_98) {
        *param_2 = lVar3;
        *param_3 = (int)local_98;
        param_3[1] = local_98._4_4_;
        param_3[2] = (int)uStack_90;
        param_3[3] = uStack_90._4_4_;
        param_3[8] = local_6c;
        *(undefined8 *)(param_3 + 4) = local_88;
        *(undefined8 *)(param_3 + 6) = uStack_80;
        *(undefined8 *)(param_3 + 10) = local_68;
        *(undefined8 *)(param_3 + 0xc) = local_60;
        local_58 = param_3;
      }
    }
  }
  else {
    *param_2 = lVar2;
  }
LAB_007aa596:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_58;
}

