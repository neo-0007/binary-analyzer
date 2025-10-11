
void _dl_tunable_set_x86_shstk(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = __memcmp_sse2(*param_1,"on",3);
  if (iVar1 == 0) {
    _dl_x86_feature_control = _dl_x86_feature_control & 0xf3 | 4;
  }
  else {
    iVar1 = __memcmp_sse2(*param_1,"off",4);
    if (iVar1 == 0) {
      _dl_x86_feature_control = _dl_x86_feature_control & 0xf3 | 8;
      return;
    }
    iVar1 = __memcmp_sse2(*param_1,"permissive",0xb);
    if (iVar1 == 0) {
      _dl_x86_feature_control = _dl_x86_feature_control | 0xc;
      return;
    }
  }
  return;
}

