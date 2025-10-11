
undefined8
FUN_006c4db0(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,ulong *param_5
            ,ulong param_6,ulong param_7,ulong *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *param_2;
  uVar2 = FUN_006e1eb0(*(undefined8 *)(param_1 + 0x10));
  *param_5 = (ulong)param_3;
  *param_8 = param_6;
  if (param_3 < param_4) {
    do {
      if (param_7 <= param_6) break;
      lVar5 = (long)param_4 - (long)param_3;
      puVar3 = (undefined4 *)thunk_FUN_00756540(param_3,0);
      puVar6 = param_4;
      if (puVar3 != (undefined4 *)0x0) {
        lVar5 = (long)puVar3 - (long)param_3;
        puVar6 = puVar3;
      }
      lVar5 = FUN_00756e40(param_6,param_5,lVar5 >> 2,param_7 - param_6,param_2);
      if (lVar5 == -1) {
        if (param_3 < (undefined4 *)*param_5) {
          uVar4 = *param_8;
          do {
            uVar1 = *param_3;
            param_3 = param_3 + 1;
            lVar5 = FUN_00756c20(uVar4,uVar1,&local_60);
            uVar4 = lVar5 + *param_8;
            *param_8 = uVar4;
          } while (param_3 < (undefined4 *)*param_5);
        }
        uVar7 = 2;
        *param_2 = local_60;
        goto LAB_006c4e98;
      }
      uVar4 = *param_8;
      if (((undefined4 *)*param_5 != (undefined4 *)0x0) && ((undefined4 *)*param_5 < puVar6)) {
        *param_8 = lVar5 + uVar4;
        uVar7 = 1;
        goto LAB_006c4e98;
      }
      *param_5 = (ulong)puVar6;
      *param_8 = lVar5 + uVar4;
      if (param_4 <= puVar6) break;
      local_60 = *param_2;
      param_6 = FUN_00756c20(local_58,*puVar6,&local_60);
      if (param_7 - *param_8 < param_6) {
        uVar7 = 1;
        goto LAB_006c4e98;
      }
      thunk_FUN_00713a50(*param_8,local_58,param_6);
      *param_2 = local_60;
      param_6 = param_6 + *param_8;
      param_3 = (undefined4 *)(*param_5 + 4);
      *param_8 = param_6;
      *param_5 = (ulong)param_3;
    } while (param_3 < param_4);
  }
  uVar7 = 0;
LAB_006c4e98:
  FUN_006e1eb0(uVar2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

