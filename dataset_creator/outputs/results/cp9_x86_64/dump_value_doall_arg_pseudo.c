
void dump_value_doall_arg(undefined8 *param_1,BIO *param_2)

{
  if (param_1[1] != 0) {
    BIO_printf(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  BIO_printf(param_2,"[[%s]]\n",*param_1);
  return;
}

