
void FUN_00419990(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 *local_108;
  undefined8 local_e8 [21];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)FUN_00417930(*param_3);
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)FUN_00418ef0(puVar3,param_1), puVar4 != (undefined8 *)0x0)) {
    uVar2 = FUN_00436480(*puVar4);
    if ((int)uVar2 < 1) {
      FUN_004222e0(*puVar3);
      local_108 = (undefined8 *)0x0;
    }
    else {
      local_108 = local_e8;
      if (((int)uVar2 < 10) ||
         (local_108 = (undefined8 *)FUN_0041ad90((long)(int)uVar2 << 4,"../crypto/ex_data.c",0x181),
         local_108 != (undefined8 *)0x0)) {
        uVar1 = 0;
        puVar8 = local_108;
        do {
          uVar7 = uVar1;
          uVar5 = FUN_004364a0(*puVar4,uVar7);
          *(int *)(puVar8 + 1) = (int)uVar7;
          uVar6 = (int)uVar7 + 1;
          *puVar8 = uVar5;
          uVar1 = (ulong)uVar6;
          puVar8 = puVar8 + 2;
        } while (uVar6 != uVar2);
        FUN_004222e0(*puVar3);
        puVar3 = local_108 + 1;
        FUN_006e8e20(local_108,(long)(int)uVar2,0x10,FUN_00418e70);
        do {
          puVar4 = (undefined8 *)puVar3[-1];
          if ((puVar4 != (undefined8 *)0x0) && (puVar4[4] != 0)) {
            uVar5 = FUN_00419480(param_3,*(undefined4 *)puVar3);
            (*(code *)puVar4[4])(param_2,uVar5,param_3,*(undefined4 *)puVar3,*puVar4,puVar4[1]);
          }
          puVar3 = puVar3 + 2;
        } while (puVar3 != local_108 + uVar7 * 2 + 3);
        if (local_108 == local_e8) goto LAB_00419ae1;
      }
      else {
        FUN_004222e0(*puVar3);
      }
    }
    FUN_0041ad60(local_108,"../crypto/ex_data.c",0x198);
  }
LAB_00419ae1:
  FUN_004360b0(param_3[1]);
  param_3[1] = 0;
  *param_3 = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

