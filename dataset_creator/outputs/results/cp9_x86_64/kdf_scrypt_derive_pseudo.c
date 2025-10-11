
undefined4 kdf_scrypt_derive(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar14;
  uint3 uVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined4 *puVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long local_c0;
  long local_b0;
  ulong local_98;
  
  iVar16 = ossl_prov_is_running();
  if ((iVar16 == 0) || (iVar16 = kdf_scrypt_set_ctx_params(param_1,param_4), iVar16 == 0)) {
    return 0;
  }
  local_c0 = param_1[2];
  if (local_c0 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/scrypt.c",0xa1,"kdf_scrypt_derive");
    ERR_set_error(0x39,0x82,0);
    return 0;
  }
  lVar28 = param_1[4];
  if (lVar28 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/scrypt.c",0xa6,"kdf_scrypt_derive");
    ERR_set_error(0x39,0x83,0);
    return 0;
  }
  local_b0 = param_1[10];
  if (local_b0 == 0) {
    iVar16 = set_digest(param_1);
    if (iVar16 == 0) {
      return 0;
    }
    local_b0 = param_1[10];
    lVar28 = param_1[4];
    local_c0 = param_1[2];
  }
  uVar26 = param_1[1];
  uVar6 = param_1[7];
  uVar7 = param_1[8];
  uVar8 = param_1[6];
  uVar29 = param_1[9];
  uVar9 = param_1[5];
  uVar10 = *param_1;
  uVar11 = param_1[3];
  if (uVar6 == 0 || uVar7 == 0) {
    return 0;
  }
  if (uVar8 < 2) {
    return 0;
  }
  if ((uVar8 & uVar8 - 1) != 0) {
    return 0;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar12,0) < uVar7) {
    ERR_new();
    uVar26 = 0x1ab;
LAB_004685f1:
    ERR_set_debug("../providers/implementations/kdfs/scrypt.c",uVar26,"scrypt_alg");
    ERR_set_error(6,0xac,0);
    return 0;
  }
  if ((uVar6 << 4 < 0x40) && ((ulong)(1L << ((byte)((int)uVar6 << 4) & 0x3f)) <= uVar8)) {
    ERR_new();
    uVar26 = 0x1b6;
    goto LAB_004685f1;
  }
  uVar18 = uVar7 * uVar6 * 0x80;
  if (0x7fffffff < uVar18) {
    ERR_new();
    uVar26 = 0x1c8;
    goto LAB_004685f1;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar6;
  auVar12 = ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff);
  uVar23 = SUB168(auVar12 % auVar13,0);
  if (SUB168(auVar12 / auVar13,0) < uVar8 + 2) {
    ERR_new(uVar8,uVar29,uVar23);
    uVar26 = 0x1d2;
    goto LAB_004685f1;
  }
  lVar27 = uVar6 * 0x80;
  uVar19 = (uVar8 + 2) * lVar27;
  uVar20 = uVar19 + uVar18;
  if (CARRY8(uVar19,uVar18)) {
    ERR_new(lVar27,uVar29,uVar23);
    uVar26 = 0x1d9;
    goto LAB_004685f1;
  }
  if (uVar29 < uVar20) {
    ERR_new(lVar27,uVar29,uVar23);
    uVar26 = 0x1e2;
    goto LAB_004685f1;
  }
  if (param_2 == 0) {
    return 1;
  }
  puVar21 = (undefined1 *)
            CRYPTO_malloc((int)uVar20,"../providers/implementations/kdfs/scrypt.c",0x1ea);
  if (puVar21 == (undefined1 *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/scrypt.c",0x1ec,"scrypt_alg");
    ERR_set_error(6,0xc0100,0);
    return 0;
  }
  iVar16 = ossl_pkcs5_pbkdf2_hmac_ex
                     (local_c0,uVar11 & 0xffffffff,lVar28,uVar9 & 0xffffffff,1,local_b0,uVar18,
                      puVar21,uVar10,uVar26);
  if (iVar16 != 0) {
    local_98 = 0;
    lVar28 = uVar6 << 5;
    puVar1 = (undefined4 *)(puVar21 + uVar18);
    puVar2 = puVar1 + uVar6 * 0x20;
    puVar3 = puVar2 + uVar6 * 0x20;
    puVar30 = puVar21;
    do {
      if (lVar28 == 0) {
        lVar25 = 0;
        puVar24 = puVar3;
      }
      else {
        lVar22 = 0;
        do {
          bVar4 = puVar30[lVar22 * 4];
          puVar3[lVar22] = (uint)bVar4;
          uVar14 = CONCAT11(puVar30[lVar22 * 4 + 1],bVar4);
          puVar3[lVar22] = (uint)uVar14;
          uVar15 = CONCAT12(puVar30[lVar22 * 4 + 2],uVar14);
          puVar3[lVar22] = (uint)uVar15;
          puVar3[lVar22] = CONCAT13(puVar30[lVar22 * 4 + 3],uVar15);
          lVar22 = lVar22 + 1;
          lVar25 = lVar28;
          puVar24 = puVar3 + uVar6 * 0x20;
        } while (lVar22 != lVar28);
      }
      uVar29 = 1;
      do {
        uVar29 = uVar29 + 1;
        scryptBlockMix(puVar24,puVar24 + uVar6 * -0x20,uVar6);
        puVar24 = puVar24 + uVar6 * 0x20;
      } while (uVar29 < uVar8);
      scryptBlockMix(puVar1,(undefined4 *)((long)puVar3 + (uVar8 - 1) * lVar27),uVar6);
      uVar29 = 0;
      do {
        uVar5 = puVar1[uVar6 * 0x20 + -0x10];
        lVar22 = 0;
        if (lVar25 != 0) {
          do {
            puVar2[lVar22] =
                 puVar1[lVar22] ^
                 *(uint *)((long)puVar3 + lVar22 * 4 + ((ulong)uVar5 % uVar8) * lVar27);
            lVar22 = lVar22 + 1;
          } while (lVar22 != lVar25);
        }
        uVar29 = uVar29 + 1;
        scryptBlockMix(puVar1,puVar2,uVar6);
      } while (uVar29 < uVar8);
      puVar24 = puVar1;
      puVar31 = puVar30;
      if (lVar25 != 0) {
        do {
          uVar17 = *puVar24;
          puVar32 = puVar31 + 4;
          *puVar31 = (char)uVar17;
          puVar31[1] = (char)((uint)uVar17 >> 8);
          puVar31[2] = (char)((uint)uVar17 >> 0x10);
          puVar31[3] = (char)((uint)uVar17 >> 0x18);
          puVar24 = puVar24 + 1;
          puVar31 = puVar32;
        } while (puVar32 != puVar30 + lVar25 * 4);
      }
      local_98 = local_98 + 1;
      puVar30 = puVar30 + lVar27;
    } while (local_98 < uVar7);
    iVar16 = ossl_pkcs5_pbkdf2_hmac_ex
                       (local_c0,(int)uVar11,puVar21,(int)uVar18,1,local_b0,param_3,param_2,uVar10,
                        uVar26);
    if (iVar16 != 0) {
      uVar17 = 1;
      goto LAB_004689c2;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/kdfs/scrypt.c",0x1ff,"scrypt_alg");
  ERR_set_error(6,0xb5,0);
  uVar17 = 0;
LAB_004689c2:
  CRYPTO_clear_free(puVar21,uVar20,"../providers/implementations/kdfs/scrypt.c",0x201);
  return uVar17;
}

