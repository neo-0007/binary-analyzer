
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_METHOD * RSA_get_default_method(void)

{
  return (RSA_METHOD *)default_RSA_meth;
}

