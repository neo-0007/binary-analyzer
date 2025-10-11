
EC_KEY * d2i_ECPrivateKey(EC_KEY **key,uchar **in,long len)

{
  ASN1_STRING *x;
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  EC_POINT *pEVar5;
  EC_KEY *key_00;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *in;
  puVar2 = (undefined4 *)d2i_EC_PRIVATEKEY(0,&local_48);
  if (puVar2 == (undefined4 *)0x0) {
    key_00 = (EC_KEY *)0x0;
    goto LAB_004ddad5;
  }
  if ((key == (EC_KEY **)0x0) || (key_00 = *key, key_00 == (EC_KEY *)0x0)) {
    key_00 = EC_KEY_new();
    if (key_00 != (EC_KEY *)0x0) goto LAB_004dd9c8;
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x3aa,"d2i_ECPrivateKey");
    ERR_set_error(0x10,0xc0100,0);
  }
  else {
LAB_004dd9c8:
    if (*(long *)(puVar2 + 4) != 0) {
      EC_GROUP_free(*(EC_GROUP **)(key_00 + 0x18));
      lVar3 = EC_GROUP_new_from_ecpkparameters(*(undefined8 *)(puVar2 + 4));
      *(long *)(key_00 + 0x18) = lVar3;
      if (lVar3 != 0) {
        if (**(int **)(puVar2 + 4) == 1) {
          *(undefined4 *)(lVar3 + 0x28) = 1;
        }
        goto LAB_004dda11;
      }
LAB_004ddb28:
      ERR_new();
      uVar4 = 0x3b9;
      goto LAB_004ddb39;
    }
    if (*(EC_GROUP **)(key_00 + 0x18) == (EC_GROUP *)0x0) goto LAB_004ddb28;
LAB_004dda11:
    x = *(ASN1_STRING **)(puVar2 + 2);
    *(undefined4 *)(key_00 + 0x10) = *puVar2;
    if (x == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x3c5,"d2i_ECPrivateKey");
      ERR_set_error(0x10,0x7d,0);
    }
    else {
      iVar1 = ASN1_STRING_length(x);
      uVar4 = ASN1_STRING_get0_data(x);
      iVar1 = EC_KEY_oct2priv(key_00,uVar4,(long)iVar1);
      if (iVar1 != 0) {
        iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
        if (iVar1 == 0x494) {
          EC_KEY_set_flags(key_00,4);
        }
        EC_POINT_clear_free(*(EC_POINT **)(key_00 + 0x20));
        pEVar5 = EC_POINT_new(*(EC_GROUP **)(key_00 + 0x18));
        *(EC_POINT **)(key_00 + 0x20) = pEVar5;
        if (pEVar5 == (EC_POINT *)0x0) {
          ERR_new();
          uVar4 = 0x3cf;
        }
        else {
          if (*(long *)(puVar2 + 6) == 0) {
            if (*(code **)(**(long **)(key_00 + 0x18) + 0x158) != (code *)0x0) {
              iVar1 = (**(code **)(**(long **)(key_00 + 0x18) + 0x158))(key_00);
              if (iVar1 != 0) {
                *(uint *)(key_00 + 0x30) = *(uint *)(key_00 + 0x30) | 2;
                goto LAB_004ddab8;
              }
            }
            goto LAB_004ddb58;
          }
          uVar4 = ASN1_STRING_get0_data();
          iVar1 = ASN1_STRING_length(*(ASN1_STRING **)(puVar2 + 6));
          iVar1 = EC_KEY_oct2key(key_00,uVar4,(long)iVar1,0);
          if (iVar1 != 0) {
LAB_004ddab8:
            if (key != (EC_KEY **)0x0) {
              *key = key_00;
            }
            EC_PRIVATEKEY_free(puVar2);
            *in = local_48;
            *(long *)(key_00 + 0x68) = *(long *)(key_00 + 0x68) + 1;
            goto LAB_004ddad5;
          }
          ERR_new();
          uVar4 = 0x3da;
        }
LAB_004ddb39:
        ERR_set_debug("../crypto/ec/ec_asn1.c",uVar4,"d2i_ECPrivateKey");
        ERR_set_error(0x10,0x80010,0);
      }
    }
  }
LAB_004ddb58:
  if ((key == (EC_KEY **)0x0) || (*key != key_00)) {
    EC_KEY_free(key_00);
  }
  key_00 = (EC_KEY *)0x0;
  EC_PRIVATEKEY_free(puVar2);
LAB_004ddad5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return key_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

