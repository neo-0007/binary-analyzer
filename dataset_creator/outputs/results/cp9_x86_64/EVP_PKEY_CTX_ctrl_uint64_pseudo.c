
void EVP_PKEY_CTX_ctrl_uint64
               (EVP_PKEY_CTX *param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_5;
  EVP_PKEY_CTX_ctrl(param_1,param_2,param_3,param_4,0,local_10);
  return;
}

