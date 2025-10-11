
undefined4 eckey_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar *penc;
  ASN1_OBJECT *aobj;
  undefined4 uVar5;
  long in_FS_OFFSET;
  int local_cc;
  uchar *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a8 = puVar1[2];
  uStack_a0 = puVar1[3];
  local_98 = puVar1[4];
  uStack_90 = puVar1[5];
  local_88 = puVar1[6];
  uStack_80 = puVar1[7];
  local_78 = puVar1[8];
  uStack_70 = puVar1[9];
  local_68 = puVar1[10];
  uStack_60 = puVar1[0xb];
  local_58 = puVar1[0xc];
  uStack_50 = puVar1[0xd];
  iVar2 = eckey_param2type(&local_cc,&local_c0,(EC_KEY *)&local_b8);
  if (iVar2 == 0) {
    uVar5 = 0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_ameth.c",0xae,"eckey_priv_encode");
    ERR_set_error(0x10,0x8e,0);
  }
  else {
    uVar3 = EC_KEY_get_enc_flags((EC_KEY *)&local_b8);
    EC_KEY_set_enc_flags((EC_KEY *)&local_b8,uVar3 | 1);
    iVar2 = i2d_ECPrivateKey((EC_KEY *)&local_b8,(uchar **)0x0);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_ameth.c",0xbd,"eckey_priv_encode");
      ERR_set_error(0x10,0x80010,0);
      uVar5 = 0;
    }
    else {
      penc = (uchar *)CRYPTO_malloc(iVar2,"../crypto/ec/ec_ameth.c",0xc0);
      if (penc == (uchar *)0x0) {
        ERR_new();
        uVar5 = 0;
        ERR_set_debug("../crypto/ec/ec_ameth.c",0xc2,"eckey_priv_encode");
        ERR_set_error(0x10,0xc0100,0);
      }
      else {
        local_c8 = penc;
        iVar4 = i2d_ECPrivateKey((EC_KEY *)&local_b8,&local_c8);
        if (iVar4 == 0) {
          uVar5 = 0;
          CRYPTO_free(penc);
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_ameth.c",200,"eckey_priv_encode");
          ERR_set_error(0x10,0x80010,0);
        }
        else {
          aobj = OBJ_nid2obj(0x198);
          iVar2 = PKCS8_pkey_set0(param_1,aobj,0,local_cc,local_c0,penc,iVar2);
          if (iVar2 == 0) {
            CRYPTO_free(penc);
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

