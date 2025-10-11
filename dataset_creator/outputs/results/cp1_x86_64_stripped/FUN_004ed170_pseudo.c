
int FUN_004ed170(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long *plVar16;
  long in_FS_OFFSET;
  long local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  iVar1 = FUN_004ef870();
  iVar2 = FUN_004ef890(param_1);
  lVar7 = FUN_004ef9c0(param_1);
  uVar8 = FUN_004ef9b0(param_1);
  uVar9 = FUN_004ef840(param_1);
  FUN_004b2c00(param_2);
  iVar3 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x10));
  iVar4 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x40));
  iVar5 = iVar3 + 7;
  if (iVar3 + 7 < 0) {
    iVar5 = iVar3 + 0xe;
  }
  iVar3 = iVar4 + 7;
  if (iVar4 + 7 < 0) {
    iVar3 = iVar4 + 0xe;
  }
  iVar4 = iVar5 >> 3;
  if (iVar5 >> 3 < iVar3 >> 3) {
    iVar4 = iVar3 >> 3;
  }
  lVar10 = FUN_0041ad90((long)(iVar4 * 6),"../crypto/ec/ec_curve.c",0xd30);
  if (lVar10 != 0) {
    plVar13 = local_78;
    plVar16 = plVar13;
    do {
      lVar11 = FUN_004b2df0(param_2);
      *plVar16 = lVar11;
      lVar15 = local_78[0];
      if (lVar11 == 0) goto LAB_004ed356;
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_78 + 6);
    iVar5 = FUN_004efa30(param_1,local_78[0],local_78[1],local_78[2],param_2);
    if ((((iVar5 != 0) && (lVar11 = FUN_004ef780(param_1), lVar11 != 0)) &&
        (iVar5 = FUN_004f0d70(param_1,lVar11,local_78[3],local_78[4],param_2), iVar5 != 0)) &&
       (iVar5 = FUN_004ef7a0(param_1,local_78[5],param_2), iVar5 != 0)) {
      iVar5 = FUN_004b87b0(lVar15,lVar10,iVar4);
      lVar15 = lVar10;
      while (0 < iVar5) {
        plVar13 = plVar13 + 1;
        lVar15 = lVar15 + iVar4;
        if (plVar13 == local_78 + 6) {
          ppuVar14 = (undefined **)&DAT_0092aea0;
          iVar6 = 0x196;
          iVar5 = 0x2c0;
          piVar12 = &DAT_007fd6a0;
          iVar3 = 0x14;
          goto LAB_004ed40d;
        }
        iVar5 = FUN_004b87b0(*plVar13,lVar15,iVar4);
      }
    }
  }
LAB_004ed356:
  iVar5 = -1;
LAB_004ed35c:
  FUN_0041ad60(lVar10,"../crypto/ec/ec_curve.c",0xd6d);
  FUN_004b2d50(param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_004ed40d:
  if ((((iVar2 == iVar6) && (piVar12[2] == iVar4)) && ((iVar1 < 1 || (iVar1 == iVar5)))) &&
     ((iVar6 = FUN_004b7ba0(uVar9), iVar6 != 0 ||
      (iVar6 = FUN_004b7cf0(uVar9,piVar12[3]), iVar6 != 0)))) {
    if (((piVar12[1] == 0) ||
        ((lVar7 == 0 ||
         ((piVar12[1] == lVar7 && (iVar6 = thunk_FUN_00713570(piVar12 + 4,uVar8,lVar7), iVar6 == 0))
         )))) && (iVar3 = thunk_FUN_00713570(lVar10,(long)(piVar12 + 4) + (long)iVar3,
                                             (long)(iVar4 * 6)), iVar3 == 0)) goto LAB_004ed35c;
  }
  if (ppuVar14 == &PTR_s_OpenSSL_EC_KEY_method_0092b8c0) goto LAB_004ed4a8;
  piVar12 = (int *)ppuVar14[1];
  iVar5 = *(int *)ppuVar14;
  ppuVar14 = ppuVar14 + 4;
  iVar3 = piVar12[1];
  iVar6 = *piVar12;
  goto LAB_004ed40d;
LAB_004ed4a8:
  iVar5 = 0;
  goto LAB_004ed35c;
}

