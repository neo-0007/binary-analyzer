
char * ossl_lib_ctx_get_descriptor(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = ossl_lib_ctx_is_global_default();
  if (iVar1 != 0) {
    return "Global default library context";
  }
  iVar1 = ossl_lib_ctx_is_default(param_1);
  pcVar2 = "Non-default library context";
  if (iVar1 != 0) {
    pcVar2 = "Thread-local default library context";
  }
  return pcVar2;
}

