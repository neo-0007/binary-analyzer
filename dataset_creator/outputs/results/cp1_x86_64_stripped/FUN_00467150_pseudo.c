
ulong FUN_00467150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long in_FS_OFFSET;
  long local_108;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = FUN_0043b840();
  if (iVar6 != 0) {
    iVar6 = FUN_00466f40(param_1,param_4);
    if (iVar6 != 0) {
      lVar8 = FUN_0043c7e0(param_1 + 2);
      if (lVar8 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/hkdf.c",0x289,"kdf_tls1_3_derive");
        FUN_0051f8f0(0x39,0x81,0);
        uVar9 = 0;
        goto LAB_0046718f;
      }
      if (*(int *)(param_1 + 1) == 1) {
        uVar1 = param_1[0xc];
        puVar13 = (undefined *)param_1[7];
        lVar2 = param_1[5];
        uVar3 = param_1[0xb];
        uVar4 = param_1[10];
        uVar5 = param_1[9];
        local_108 = param_1[8];
        uVar10 = FUN_00485290(*param_1);
        iVar6 = FUN_0040ac10(lVar8);
        lVar12 = (long)iVar6;
        uVar9 = 0;
        if (iVar6 < 1) goto LAB_0046718f;
        if (puVar13 == (undefined *)0x0) {
          puVar13 = &DAT_007e4580;
          local_108 = lVar12;
        }
        if (lVar2 == 0) {
          uVar9 = FUN_00466740(uVar10,lVar8,&DAT_007e4580,0,puVar13,local_108,param_2,param_3);
          goto LAB_0046718f;
        }
        lVar11 = FUN_00405f40();
        if (lVar11 != 0) {
          iVar6 = FUN_00407430(lVar11,lVar8,0);
          if (0 < iVar6) {
            iVar6 = FUN_00406090(lVar11,local_88,0);
            if (0 < iVar6) {
              FUN_00406b90(lVar11);
              iVar6 = FUN_00466b60(lVar8,lVar2,lVar12,uVar5,uVar4,uVar3,uVar1,local_88,lVar12,
                                   local_c8,lVar12);
              if (iVar6 != 0) {
                uVar7 = FUN_00466740(uVar10,lVar8,local_c8,lVar12,puVar13,local_108,param_2,param_3)
                ;
                FUN_004227b0(local_c8,lVar12);
                uVar9 = (ulong)uVar7;
                goto LAB_0046718f;
              }
              goto LAB_0046718d;
            }
          }
        }
        FUN_00406b90(lVar11);
      }
      else if (*(int *)(param_1 + 1) == 2) {
        uVar9 = FUN_00466b60(lVar8,param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                             param_1[0xc],param_1[0xd],param_1[0xe],param_2,param_3);
        goto LAB_0046718f;
      }
    }
  }
LAB_0046718d:
  uVar9 = 0;
LAB_0046718f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

