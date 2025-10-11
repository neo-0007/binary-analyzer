
bool FUN_00471620(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  char *local_80;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  lVar6 = FUN_004ee2d0();
  if (lVar6 != 0) {
    uVar7 = FUN_004ee2a0(param_1);
    uVar8 = FUN_004ee2b0(param_1);
    lVar9 = FUN_004b2a70(uVar7);
    if (lVar9 != 0) {
      FUN_004b2c00(lVar9);
      lVar10 = FUN_0041cdd0(param_2,"max-size");
      if (lVar10 == 0) {
LAB_004716d1:
        lVar10 = FUN_0041cdd0(param_2,"bits");
        if (lVar10 != 0) {
          uVar3 = FUN_004ef7f0(lVar6);
          iVar4 = thunk_FUN_0041d0b0(lVar10,uVar3);
          if (iVar4 == 0) goto LAB_004718f0;
        }
        lVar10 = FUN_0041cdd0(param_2,"security-bits");
        if (lVar10 != 0) {
          iVar4 = FUN_004ef7f0(lVar6);
          iVar16 = 0x100;
          if ((((iVar4 < 0x200) && (iVar16 = 0xc0, iVar4 < 0x180)) && (iVar16 = 0x80, iVar4 < 0x100)
              ) && ((iVar16 = 0x70, iVar4 < 0xe0 && (iVar16 = 0x50, iVar4 < 0xa0)))) {
            iVar16 = iVar4 / 2;
          }
          iVar4 = thunk_FUN_0041d0b0(lVar10,iVar16);
          if (iVar4 == 0) goto LAB_004718f0;
        }
        lVar10 = FUN_0041cdd0(param_2,"decoded-from-explicit");
        if ((lVar10 != 0) &&
           ((iVar4 = FUN_004ee940(param_1), iVar4 < 0 ||
            (iVar4 = thunk_FUN_0041d0b0(lVar10,iVar4), iVar4 == 0)))) goto LAB_004718f0;
        if (param_3 != 0) {
          lVar10 = FUN_0041cdd0(param_2,"default-digest");
          if ((lVar10 == 0) || (iVar4 = FUN_0041e1a0(lVar10,&DAT_007d5248), iVar4 != 0))
          goto LAB_00471830;
          goto LAB_004718f0;
        }
        lVar10 = FUN_0041cdd0(param_2,"default-digest");
        if ((lVar10 != 0) && (iVar4 = FUN_0041e1a0(lVar10,"SHA256"), iVar4 == 0)) goto LAB_004718f0;
        lVar10 = FUN_0041cdd0(param_2,"use-cofactor-flag");
        if (lVar10 != 0) {
          uVar5 = FUN_004ee6c0(param_1);
          iVar4 = thunk_FUN_0041d0b0(lVar10,uVar5 >> 0xc & 1);
          if (iVar4 == 0) goto LAB_004718f0;
        }
LAB_00471830:
        lVar10 = FUN_0041cdd0(param_2,"encoded-pub-key");
        if (lVar10 != 0) {
          uVar1 = *(undefined8 *)(lVar10 + 0x20);
          uVar2 = *(undefined8 *)(lVar10 + 0x10);
          uVar11 = FUN_004ee3f0(param_1);
          uVar12 = FUN_004ee2d0(param_1);
          lVar13 = FUN_004f4c40(uVar12,uVar11,4,uVar2,uVar1,lVar9);
          *(long *)(lVar10 + 0x20) = lVar13;
          if (lVar13 == 0) goto LAB_004718f0;
        }
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        iVar4 = FUN_004ef890(lVar6);
        if (iVar4 == 0x197) {
          iVar4 = FUN_004f1ad0(lVar6);
          if (iVar4 == 0x2aa) {
            local_80 = "p.tpBasis";
          }
          else {
            if (iVar4 != 0x2ab) goto LAB_004718f0;
            local_80 = "p.ppBasis";
          }
          local_80 = local_80 + 2;
          uVar3 = FUN_004efad0(lVar6);
          iVar16 = FUN_00548aa0(0,param_2,"m",uVar3);
          if ((iVar16 != 0) && (iVar16 = FUN_00548b40(0,param_2,"basis-type",local_80), iVar16 != 0)
             ) {
            if (iVar4 == 0x2aa) {
              iVar4 = FUN_004f1b30(lVar6,&local_5c);
              if (iVar4 != 0) {
                puVar15 = &DAT_0081aaec;
                uVar3 = local_5c;
                goto LAB_00471b5d;
              }
            }
            else {
              iVar4 = FUN_004f1bd0(lVar6,&local_5c,&local_58,&local_54);
              if (((iVar4 != 0) &&
                  (iVar4 = FUN_00548aa0(0,param_2,&DAT_007d2dfd,local_5c), iVar4 != 0)) &&
                 (iVar4 = FUN_00548aa0(0,param_2,"k2",local_58), iVar4 != 0)) {
                puVar15 = &DAT_007e4dd8;
                uVar3 = local_54;
LAB_00471b5d:
                iVar4 = FUN_00548aa0(0,param_2,puVar15,uVar3);
                if (iVar4 != 0) goto LAB_004718c1;
              }
            }
          }
          goto LAB_004718f0;
        }
LAB_004718c1:
        iVar4 = FUN_004eb2f0(lVar6,0,param_2,uVar7,uVar8,lVar9,&local_48);
        if (((iVar4 == 0) || (iVar4 = FUN_004708d0(param_1,0,param_2,1,&local_50), iVar4 == 0)) ||
           (param_1 == 0)) goto LAB_004718f0;
        uVar3 = FUN_004ee650(param_1);
        lVar6 = FUN_004eb2c0(uVar3);
        if ((lVar6 != 0) && (iVar4 = FUN_00548b40(0,param_2,"point-format",lVar6), iVar4 == 0))
        goto LAB_004718f0;
        uVar5 = FUN_004ee6c0(param_1);
        lVar6 = FUN_004eb120(uVar5 & 0x6000);
        if (((lVar6 != 0) && (iVar4 = FUN_00548b40(0,param_2,"group-check",lVar6), iVar4 == 0)) ||
           ((uVar14 = FUN_004ee630(param_1), (uVar14 & 2) != 0 &&
            (iVar4 = FUN_00548aa0(0,param_2,"include-public",0), iVar4 == 0)))) goto LAB_004718f0;
        uVar5 = FUN_004ee6c0(param_1);
        iVar4 = FUN_00548aa0(0,param_2,"use-cofactor-flag",uVar5 >> 0xc & 1);
        bVar17 = iVar4 != 0;
      }
      else {
        uVar3 = FUN_004eb050(param_1);
        iVar4 = thunk_FUN_0041d0b0(lVar10,uVar3);
        if (iVar4 != 0) goto LAB_004716d1;
LAB_004718f0:
        bVar17 = false;
      }
      FUN_0041ad60(local_48,"../providers/implementations/keymgmt/ec_kmgmt.c",0x2e6);
      FUN_0041ad60(local_50,"../providers/implementations/keymgmt/ec_kmgmt.c",0x2e7);
      FUN_004b2d50(lVar9);
      FUN_004b2b50(lVar9);
      goto LAB_00471933;
    }
  }
  bVar17 = false;
LAB_00471933:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar17;
}

