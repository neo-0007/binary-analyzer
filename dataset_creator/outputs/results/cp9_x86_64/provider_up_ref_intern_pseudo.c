
void provider_up_ref_intern(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    ossl_provider_up_ref();
    return;
  }
  ossl_provider_activate(param_1,1,0);
  return;
}

