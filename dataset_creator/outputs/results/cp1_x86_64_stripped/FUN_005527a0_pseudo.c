
undefined8
FUN_005527a0(undefined1 (*param_1) [16],long param_2,int param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0x10;
  if (param_1 != (undefined1 (*) [16])0x0) {
    *param_1 = (undefined1  [16])0x0;
    FUN_00537b70(*(undefined8 *)param_1[2]);
    FUN_0053f190(*(undefined8 *)param_1[3]);
    thunk_FUN_0053f9f0(*(undefined8 *)(param_1[2] + 8));
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)param_1[3] = 0;
    if ((param_4 != 0 && param_5 != 0) && (param_2 != 0)) {
      uVar2 = FUN_0040a3d0(param_4);
      FUN_0041e290(&local_f8,"cipher",uVar2,0);
      local_98 = local_d8;
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      FUN_0041e2e0(&local_f8,"key",param_2,(long)param_3);
      local_90 = local_f8;
      uStack_88 = uStack_f0;
      local_70 = local_d8;
      local_80 = local_e8;
      uStack_78 = uStack_e0;
      FUN_0041e470(&local_f8);
      local_68 = local_f8;
      uStack_60 = uStack_f0;
      local_48 = local_d8;
      local_58 = local_e8;
      uStack_50 = uStack_e0;
      lVar3 = FUN_00535890();
      *(long *)param_1[2] = lVar3;
      if (lVar3 == 0) {
        uVar2 = 0;
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_0053fe10(param_6,"CMAC",param_7);
        *(long *)(param_1[2] + 8) = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_0053f090(lVar3);
          *(long *)param_1[3] = lVar3;
          if (lVar3 != 0) {
            iVar1 = FUN_0053f3a0(lVar3,&local_b8);
            if (iVar1 != 0) {
              iVar1 = FUN_00538aa0(*(undefined8 *)param_1[2],param_5,0,param_2 + param_3);
              if (iVar1 != 0) {
                lVar3 = FUN_0053f1e0(*(undefined8 *)param_1[3]);
                if (lVar3 != 0) {
                  iVar1 = FUN_0053f330(lVar3,&DAT_00806730,0x10);
                  if (iVar1 != 0) {
                    iVar1 = FUN_0053f650(lVar3,param_1,&local_c0,0x10);
                    if (iVar1 != 0) {
                      FUN_0053f190(lVar3);
                      *(undefined8 *)(param_1[3] + 8) = 0x1ffffffff;
                      uVar2 = 1;
                      goto LAB_005529ac;
                    }
                  }
                }
                goto LAB_00552980;
              }
            }
            uVar2 = *(undefined8 *)param_1[2];
            lVar3 = 0;
            goto LAB_00552984;
          }
        }
LAB_00552980:
        uVar2 = *(undefined8 *)param_1[2];
      }
LAB_00552984:
      FUN_00537b70(uVar2);
      FUN_0053f190(*(undefined8 *)param_1[3]);
      FUN_0053f190(lVar3);
      thunk_FUN_0053f9f0(*(undefined8 *)(param_1[2] + 8));
    }
  }
  uVar2 = 0;
LAB_005529ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

