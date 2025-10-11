
void ossl_sa_doall_arg(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    sa_doall(param_1,0,param_2,param_3);
    return;
  }
  return;
}

