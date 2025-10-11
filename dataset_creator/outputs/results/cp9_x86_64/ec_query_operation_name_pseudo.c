
char * ec_query_operation_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "ECDH";
  if ((param_1 != 0xb) && (pcVar1 = "ECDSA", param_1 != 0xc)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

