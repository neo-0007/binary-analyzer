
void prefix_read(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BIO *pBVar1;
  
  pBVar1 = BIO_next(param_1);
  BIO_read_ex(pBVar1,param_2,param_3,param_4);
  return;
}

