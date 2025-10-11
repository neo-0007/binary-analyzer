
undefined8 ossl_core_bio_up_ref(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return 1;
}

