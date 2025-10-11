
undefined8 sha1_set_ctx_params(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar1 = OSSL_PARAM_locate_const(param_2,"ssl3-ms");
    if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 5)) {
      uVar2 = ossl_sha1_ctrl(param_1,0x1d,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined8 *)(lVar1 + 0x10));
      return uVar2;
    }
  }
  return 1;
}

