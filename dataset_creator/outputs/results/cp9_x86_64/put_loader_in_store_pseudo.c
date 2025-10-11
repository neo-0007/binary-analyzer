
undefined1  [16]
put_loader_in_store(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = ossl_namemap_stored(*param_6);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ != 0) {
    auVar2 = ossl_namemap_name2num(auVar2._0_8_,param_4);
    uVar1 = auVar2._8_8_;
    if (auVar2._0_4_ != 0) {
      if (param_1 == 0) {
        auVar3 = ossl_lib_ctx_get_data(*param_6,0xf,loader_store_method);
        uVar1 = auVar3._8_8_;
        param_1 = auVar3._0_8_;
        if (param_1 == 0) goto LAB_00434eec;
      }
      auVar3._0_8_ = ossl_method_store_add
                               (param_1,param_3,auVar2._0_8_ & 0xffffffff,param_5,param_2,
                                up_ref_loader);
      auVar3._8_8_ = free_loader;
      return auVar3;
    }
  }
LAB_00434eec:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2 << 0x40;
}

