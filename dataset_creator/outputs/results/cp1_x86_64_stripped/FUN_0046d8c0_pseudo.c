
undefined4 FUN_0046d8c0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  int local_fc;
  char *local_d8;
  ulong local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = FUN_0043b840();
  if ((iVar13 == 0) || (iVar13 = FUN_0046d480(param_1,param_4), iVar13 == 0)) {
LAB_0046d8fd:
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  if ((*(int *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x19d,"x942kdf_derive");
    FUN_0051f8f0(0x39,0xc6,0);
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((((*(long *)(param_1 + 0x40) != 0 || (*(long *)(param_1 + 0x48) != 0)) ||
       (*(long *)(param_1 + 0x50) != 0)) || (*(long *)(param_1 + 0x58) != 0)))) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1a9,"x942kdf_derive");
    FUN_0051f8f0(0x39,0x73,0);
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1ad,"x942kdf_derive");
    FUN_0051f8f0(0x39,0x84,0);
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  lVar15 = FUN_0043c7e0(param_1 + 8);
  if (lVar15 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1b2,"x942kdf_derive");
    FUN_0051f8f0(0x39,0x81,0);
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  lVar17 = *(long *)(param_1 + 0x88);
  if ((lVar17 == 0) || (lVar18 = *(long *)(param_1 + 0x90), lVar18 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1b6,"x942kdf_derive");
    FUN_0051f8f0(0x39,0x90,0);
    uVar14 = 0;
    goto LAB_0046d8ff;
  }
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = *(ulong *)(param_1 + 0x60);
  if ((lVar1 != 0) && (0x3fffffff < uVar2)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1be,"x942kdf_derive");
    FUN_0051f8f0(0x39,200,0);
    goto LAB_0046d8fd;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x98) == 0) {
    local_fc = 0;
LAB_0046dab5:
    local_d0 = 0;
    local_d8 = (char *)0x0;
    iVar13 = FUN_0046d160(local_c8,0,0);
    if ((iVar13 != 0) && (iVar13 = FUN_005472b0(local_c8,&local_d0), iVar13 != 0)) {
      FUN_00547da0(local_c8);
      lVar16 = FUN_0041aec0(local_d0,"../providers/implementations/kdfs/x942kdf.c",0xe4);
      if (((lVar16 != 0) &&
          (((iVar13 = FUN_0046d160(local_c8,lVar16,local_d0,lVar17,lVar18,uVar4,uVar10,lVar1,uVar2,
                                   uVar9,uVar8,uVar7,uVar6,uVar5,uVar3,local_fc,&local_d8),
            iVar13 != 0 &&
            (lVar17 = FUN_00547310(local_c8), uVar2 = local_d0, pcVar12 = local_d8, lVar16 == lVar17
            )) && (local_d8 != (char *)0x0)))) && ((*local_d8 == '\x04' && (local_d8[1] == '\x04')))
         ) {
        FUN_00547da0(local_c8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = *(ulong *)(param_1 + 0x28);
        if ((uVar11 < 0x40000001) && ((uVar2 < 0x40000001 && (param_3 - 1 < 0x40000000)))) {
          iVar13 = FUN_0040ac10(lVar15);
          uVar19 = (ulong)iVar13;
          uVar14 = 0;
          if (0 < iVar13) {
            lVar17 = FUN_00405f40();
            lVar18 = FUN_00405f40();
            if ((lVar17 != 0) && (lVar18 != 0)) {
              uVar20 = 1;
              iVar13 = FUN_00407400(lVar18,lVar15);
              if (iVar13 != 0) {
                while( true ) {
                  *(uint *)(pcVar12 + 2) =
                       uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18;
                  iVar13 = FUN_004074f0(lVar17,lVar18);
                  if (((iVar13 == 0) || (iVar13 = FUN_00405f60(lVar17,uVar3,uVar11), iVar13 == 0))
                     || (iVar13 = FUN_00405f60(lVar17,lVar16,uVar2), iVar13 == 0))
                  goto LAB_0046de5a;
                  if (param_3 < uVar19) break;
                  iVar13 = FUN_00406090(lVar17,param_2,0);
                  if (iVar13 == 0) goto LAB_0046de5a;
                  param_2 = param_2 + uVar19;
                  param_3 = param_3 - uVar19;
                  if (param_3 == 0) {
                    uVar14 = 1;
                    goto LAB_0046de5c;
                  }
                  uVar20 = uVar20 + 1;
                }
                iVar13 = FUN_00406090(lVar17,local_88,0);
                if (iVar13 != 0) {
                  thunk_FUN_00713a50(param_2,local_88,param_3);
                  uVar14 = 1;
                  goto LAB_0046de5c;
                }
              }
            }
LAB_0046de5a:
            uVar14 = 0;
LAB_0046de5c:
            FUN_00406b90(lVar17);
            FUN_00406b90(lVar18);
            FUN_004227b0(local_88,0x40);
          }
        }
        else {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x118,"x942kdf_hash_kdm");
          FUN_0051f8f0(0x39,0x8e,0);
          uVar14 = 0;
        }
        FUN_0041ad60(lVar16,"../providers/implementations/kdfs/x942kdf.c",0x1cf);
        goto LAB_0046d8ff;
      }
    }
    FUN_00547da0(local_c8);
  }
  else {
    local_d8 = (char *)0x0;
    local_d0 = 0;
    if (*(ulong *)(param_1 + 0x80) < 0x1000000) {
      local_fc = (int)*(ulong *)(param_1 + 0x80) << 3;
      goto LAB_0046dab5;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/kdfs/x942kdf.c",0x1ca,"x942kdf_derive");
  FUN_0051f8f0(0x39,0x8d,0);
  uVar14 = 0;
LAB_0046d8ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar14;
}

