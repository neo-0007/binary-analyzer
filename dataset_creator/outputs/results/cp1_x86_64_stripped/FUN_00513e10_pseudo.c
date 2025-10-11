
undefined8 FUN_00513e10(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  ulong local_a0;
  ulong local_98;
  ulong local_88;
  ulong local_80;
  ulong local_60;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x1e5,"OSSL_DECODER_CTX_add_extra");
    FUN_0051f8f0(0x3c,0xc0102,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar6 = FUN_00436410();
      if (lVar6 != 0) {
        FUN_00515940(param_2,FUN_005135b0,lVar6);
        iVar4 = FUN_00436480(lVar6);
        local_60 = 0;
        uVar7 = (ulong)iVar4;
        iVar4 = FUN_00436480(*(undefined8 *)(param_1 + 0x18));
        local_80 = 0;
        local_88 = (long)iVar4;
LAB_00513eca:
        bVar2 = false;
        uVar13 = local_88;
        local_a0 = local_60;
        do {
          if (local_a0 < local_88) {
            local_98 = local_a0;
            do {
              uVar5 = FUN_004364a0(*(undefined8 *)(param_1 + 0x18),local_98 & 0xffffffff);
              uVar5 = FUN_00513df0(uVar5);
              if (uVar7 != 0) {
                uVar14 = 0;
                do {
                  while( true ) {
                    lVar8 = FUN_004364a0(lVar6,uVar14 & 0xffffffff);
                    uVar9 = FUN_00515780(lVar8);
                    uVar9 = thunk_FUN_00420cb0(uVar9);
                    iVar4 = FUN_005158f0(lVar8,uVar5);
                    uVar3 = local_a0;
                    if (iVar4 != 0) break;
joined_r0x005140b3:
                    uVar14 = uVar14 + 1;
                    if (uVar7 == uVar14) goto LAB_00513fae;
                  }
                  for (; uVar3 < uVar13; uVar3 = uVar3 + 1) {
                    plVar10 = (long *)FUN_004364a0(*(undefined8 *)(param_1 + 0x18),
                                                   uVar3 & 0xffffffff);
                    if (*(long *)(lVar8 + 0x18) == *(long *)(*plVar10 + 0x18))
                    goto joined_r0x005140b3;
                  }
                  lVar11 = (**(code **)(lVar8 + 0x38))(uVar9);
                  if (lVar11 == 0) goto joined_r0x005140b3;
                  lVar12 = FUN_00513770(lVar8,lVar11);
                  if (lVar12 == 0) {
                    (**(code **)(lVar8 + 0x40))(lVar11);
                    goto joined_r0x005140b3;
                  }
                  if (bVar2) {
                    uVar9 = FUN_00513df0(lVar12);
                    iVar4 = FUN_005158f0(lVar8,uVar9);
                    if (iVar4 == 0) goto LAB_00514039;
LAB_00514088:
                    FUN_00513710(lVar12);
                  }
                  else {
                    uVar9 = FUN_00513df0(lVar12);
                    iVar4 = FUN_005158f0(lVar8,uVar9);
                    if (iVar4 == 0) goto LAB_00514088;
LAB_00514039:
                    iVar4 = FUN_005139b0(param_1,lVar12);
                    if (iVar4 == 0) goto LAB_00514088;
                    uVar13 = uVar13 + 1;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar7 != uVar14);
              }
LAB_00513fae:
              local_98 = local_98 + 1;
            } while (local_98 < local_88);
          }
          if (bVar2) goto LAB_005140be;
          local_a0 = local_60;
          bVar2 = true;
        } while( true );
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x1f8,"OSSL_DECODER_CTX_add_extra");
      FUN_0051f8f0(0x3c,0xc0100,0);
      uVar5 = 0;
    }
  }
LAB_0051410b:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_005140be:
  local_60 = local_88;
  local_80 = local_80 + 1;
  if ((local_88 == uVar13) || (local_88 = uVar13, 10 < local_80)) goto LAB_005140f2;
  goto LAB_00513eca;
LAB_005140f2:
  FUN_00436430(lVar6,FUN_005151b0);
  uVar5 = 1;
  goto LAB_0051410b;
}

