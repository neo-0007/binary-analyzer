
void ossl_curve448_scalar_decode_long(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong local_b8 [7];
  ulong local_80;
  undefined1 local_78 [56];
  long local_40;
  
  uVar9 = ossl_curve448_scalar_zero._48_8_;
  uVar8 = ossl_curve448_scalar_zero._40_8_;
  uVar7 = ossl_curve448_scalar_zero._32_8_;
  uVar6 = ossl_curve448_scalar_zero._24_8_;
  uVar5 = ossl_curve448_scalar_zero._16_8_;
  uVar4 = ossl_curve448_scalar_zero._8_8_;
  puVar14 = local_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    *param_1 = ossl_curve448_scalar_zero._0_8_;
    param_1[1] = uVar4;
    param_1[6] = uVar9;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
  }
  else {
    uVar15 = (param_3 / 0x38) * 0x38;
    uVar13 = param_3 % 0x38;
    if (param_3 == uVar15) {
      uVar15 = param_3 - 0x38;
      uVar13 = 0x38;
    }
    uVar11 = 0;
    do {
      lVar1 = uVar15 + uVar11;
      uVar12 = 0;
      uVar10 = 0;
      do {
        if (uVar13 <= uVar11) break;
        pbVar2 = (byte *)(lVar1 + param_2 + uVar10);
        cVar3 = (char)uVar10;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 | (ulong)*pbVar2 << (cVar3 * '\b' & 0x3fU);
      } while (uVar10 < 8);
      *puVar14 = uVar12;
      puVar14 = puVar14 + 1;
    } while (&local_80 != puVar14);
    if (param_3 == 0x38) {
      ossl_curve448_scalar_mul(param_1,local_b8,ossl_curve448_scalar_one);
      ossl_curve448_scalar_destroy(local_b8);
    }
    else {
      while (uVar15 != 0) {
        uVar15 = uVar15 - 0x38;
        sc_montmul(local_b8,local_b8,sc_r2);
        ossl_curve448_scalar_decode(local_78,param_2 + uVar15);
        ossl_curve448_scalar_add(local_b8,local_b8,local_78);
      }
      param_1[6] = local_b8[6];
      *param_1 = local_b8[0];
      param_1[1] = local_b8[1];
      param_1[2] = local_b8[2];
      param_1[3] = local_b8[3];
      param_1[4] = local_b8[4];
      param_1[5] = local_b8[5];
      ossl_curve448_scalar_destroy(local_b8);
      ossl_curve448_scalar_destroy(local_78);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

