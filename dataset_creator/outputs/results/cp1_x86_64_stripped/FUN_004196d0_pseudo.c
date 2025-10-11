
undefined4 FUN_004196d0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_3[1];
  *param_2 = *param_3;
  if (lVar1 == 0) {
LAB_00419900:
    uVar4 = 1;
  }
  else {
    puVar5 = (undefined8 *)FUN_00417930();
    if ((puVar5 != (undefined8 *)0x0) &&
       (puVar6 = (undefined8 *)FUN_00418ef0(puVar5,param_1), puVar6 != (undefined8 *)0x0)) {
      iVar2 = FUN_00436480(*puVar6);
      iVar3 = FUN_00436480(param_3[1]);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      if (0 < iVar3) {
        if (iVar3 < 10) {
          puVar8 = local_98;
        }
        else {
          puVar8 = (undefined1 *)FUN_0041ad90((long)iVar3 * 8,"../crypto/ex_data.c",299);
          if (puVar8 == (undefined1 *)0x0) {
            FUN_004222e0(*puVar5);
            goto LAB_00419895;
          }
        }
        local_b0 = local_98;
        uVar9 = 0;
        do {
          uVar7 = FUN_004364a0(*puVar6,uVar9 & 0xffffffff);
          *(undefined8 *)(puVar8 + uVar9 * 8) = uVar7;
          uVar9 = uVar9 + 1;
        } while (uVar9 != (long)iVar3);
        FUN_004222e0(*puVar5);
        uVar7 = FUN_00419480(param_2,iVar3 + -1);
        uVar9 = 0;
        iVar2 = FUN_00419350(param_2,iVar3 + -1,uVar7);
        if (iVar2 == 0) {
LAB_00419910:
          uVar4 = 0;
        }
        else {
          do {
            uVar10 = uVar9 & 0xffffffff;
            local_a0 = FUN_00419480(param_3,uVar9 & 0xffffffff);
            puVar5 = *(undefined8 **)(puVar8 + uVar9 * 8);
            if (((puVar5 != (undefined8 *)0x0) && ((code *)puVar5[5] != (code *)0x0)) &&
               (iVar2 = (*(code *)puVar5[5])
                                  (param_2,param_3,&local_a0,uVar9 & 0xffffffff,*puVar5,puVar5[1]),
               iVar2 == 0)) goto LAB_00419910;
            uVar9 = uVar9 + 1;
            FUN_00419350(param_2,uVar10,local_a0);
          } while ((long)iVar3 != uVar9);
          uVar4 = 1;
        }
        if (puVar8 != local_b0) {
          FUN_0041ad60(puVar8,"../crypto/ex_data.c",0x14d);
        }
        goto LAB_004198d2;
      }
      FUN_004222e0(*puVar5);
      if (iVar3 == 0) goto LAB_00419900;
LAB_00419895:
      FUN_0051f420();
      FUN_0051f540("../crypto/ex_data.c",0x135,"CRYPTO_dup_ex_data");
      FUN_0051f8f0(0xf,0xc0100,0);
    }
    uVar4 = 0;
  }
LAB_004198d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

