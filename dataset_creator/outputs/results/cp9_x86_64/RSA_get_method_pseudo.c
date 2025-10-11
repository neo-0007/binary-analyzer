
RSA_METHOD * RSA_get_method(RSA *rsa)

{
  return (RSA_METHOD *)rsa->engine;
}

