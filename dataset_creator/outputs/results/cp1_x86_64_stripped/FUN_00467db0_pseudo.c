
undefined4 FUN_00467db0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  ulong local_b8;
  uint local_ac;
  undefined1 local_49;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = FUN_0043b840();
  if ((iVar8 != 0) && (iVar8 = FUN_004679d0(param_1,param_4), iVar8 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0xe4,"kbkdf_derive");
        FUN_0051f8f0(0x39,0x72,0);
        uVar10 = 0;
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0xe9,"kbkdf_derive");
        FUN_0051f8f0(0x39,0x96,0);
        uVar10 = 0;
      }
      goto LAB_00467dec;
    }
    if (param_3 != 0) {
      uVar11 = FUN_0053f2f0();
      if (uVar11 == 0) {
LAB_0046812c:
        lVar12 = 0;
      }
      else if ((*(ulong *)(param_1 + 0x50) == 0) || (uVar11 == *(ulong *)(param_1 + 0x50))) {
        local_ac = 0;
        if (*(int *)(param_1 + 0x58) != 0) {
          uVar17 = (int)param_3 * 8;
          local_ac = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     (int)param_3 << 0x1b;
        }
        lVar12 = FUN_0041aec0(uVar11,"../providers/implementations/kdfs/kbkdf.c",0xfe);
        if (lVar12 == 0) goto LAB_0046812c;
        iVar8 = *(int *)(param_1 + 0x5c);
        iVar2 = *(int *)(param_1 + 8);
        local_49 = 0;
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        local_48 = local_ac;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        local_b8 = *(ulong *)(param_1 + 0x50);
        if (local_b8 != 0) {
          thunk_FUN_00713a50(lVar12,*(undefined8 *)(param_1 + 0x48),local_b8);
        }
        uVar15 = 0;
        local_44 = 0x1000000;
        uVar17 = 1;
        uVar16 = param_3;
        while ((((lVar13 = FUN_0053f1e0(uVar4), lVar13 != 0 &&
                 ((((iVar2 != 1 || (iVar9 = FUN_0053f330(lVar13,lVar12,local_b8), iVar9 != 0)) &&
                   (iVar9 = FUN_0053f330(lVar13,&local_44,4), iVar9 != 0)) &&
                  (iVar9 = FUN_0053f330(lVar13,uVar7,uVar6), iVar9 != 0)))) &&
                ((((iVar8 == 0 || (iVar9 = FUN_0053f330(lVar13,&local_49,1), iVar9 != 0)) &&
                  (iVar9 = FUN_0053f330(lVar13,uVar5,uVar3), iVar9 != 0)) &&
                 ((local_ac == 0 || (iVar9 = FUN_0053f330(lVar13,&local_48,4), iVar9 != 0)))))) &&
               (iVar9 = FUN_0053f650(lVar13,lVar12,0,uVar11), iVar9 != 0))) {
          uVar14 = uVar16;
          if (uVar11 <= uVar16) {
            uVar14 = uVar11;
          }
          uVar17 = uVar17 + 1;
          uVar16 = uVar16 - uVar11;
          lVar1 = param_2 + uVar15;
          uVar15 = uVar15 + uVar11;
          thunk_FUN_00713a50(lVar1,lVar12,uVar14);
          FUN_0053f190(lVar13);
          if (param_3 <= uVar15) {
            FUN_0053f190(0);
            uVar10 = 1;
            goto LAB_0046813c;
          }
          local_44 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 * 0x1000000;
          local_b8 = uVar11;
        }
        FUN_0053f190(lVar13);
      }
      else {
        FUN_0051f420();
        lVar12 = 0;
        FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0xf7,"kbkdf_derive");
        FUN_0051f8f0(0x39,0x9a,0);
      }
      FUN_004227b0(param_2,param_3);
      uVar10 = 0;
LAB_0046813c:
      FUN_0041aef0(lVar12,uVar11,"../providers/implementations/kdfs/kbkdf.c",0x108);
      goto LAB_00467dec;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0xef,"kbkdf_derive");
    FUN_0051f8f0(0x39,0x69,0);
  }
  uVar10 = 0;
LAB_00467dec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar10;
}

