
void collect_section_name(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    return;
  }
  OPENSSL_sk_push(param_2,*param_1);
  return;
}

