
long encoder_construct_pkey(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2[3];
  if (lVar6 == 0) {
    uVar3 = OSSL_ENCODER_INSTANCE_get_encoder();
    lVar1 = *param_2;
    lVar4 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(lVar1 + 0x60));
    lVar5 = OSSL_ENCODER_get0_provider(uVar3);
    if (lVar4 == lVar5) {
      lVar6 = *(long *)(lVar1 + 0x68);
      param_2[3] = lVar6;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x68);
      param_2[2] = param_1;
      iVar2 = evp_keymgmt_export(*(undefined8 *)(lVar1 + 0x60),uVar3,(int)param_2[1],
                                 encoder_import_cb,param_2);
      if (iVar2 != 0) {
        lVar6 = param_2[4];
        param_2[3] = lVar6;
      }
    }
  }
  return lVar6;
}

