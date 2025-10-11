
undefined1  [16]
put_decoder_in_store
          (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  sVar4 = 0;
  if (param_4 != (char *)0x0) {
    pcVar2 = strchr(param_4,0x3a);
    sVar4 = (long)pcVar2 - (long)param_4;
    if (pcVar2 == (char *)0x0) {
      sVar4 = strlen(param_4);
    }
  }
  lVar3 = ossl_namemap_stored(*param_6);
  if (lVar3 != 0) {
    auVar5 = ossl_namemap_name2num_n(lVar3,param_4,sVar4);
    sVar4 = auVar5._8_8_;
    if (auVar5._0_4_ != 0) {
      if (param_1 == 0) {
        auVar6 = ossl_lib_ctx_get_data(*param_6,0xb,decoder_store_method);
        sVar4 = auVar6._8_8_;
        param_1 = auVar6._0_8_;
        if (param_1 == 0) goto LAB_0050847c;
      }
      puVar1 = PTR_OSSL_DECODER_free_0092def0;
      auVar6._0_8_ = ossl_method_store_add
                               (param_1,param_3,auVar5._0_8_ & 0xffffffff,param_5,param_2,
                                OSSL_DECODER_up_ref);
      auVar6._8_8_ = puVar1;
      return auVar6;
    }
  }
LAB_0050847c:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = sVar4;
  return auVar5 << 0x40;
}

