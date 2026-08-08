#!/usr/bin/python3
"""
3-user module
"""


class User:
    """ Defines a User class """

    def __init__(self):
        """ Initialize user attributes """
        self.email = None
        self.password = None

    @property
    def password(self):
        """ Password getter """
        return self.__password

    @password.setter
    def password(self, pwd):
        """ Password setter with basic validation/hashing or storage """
        if pwd is not None and not isinstance(pwd, str):
            self.__password = None
        else:
            self.__password = pwd

    def is_valid_password(self, pwd):
        """ Checks if the provided password matches the user's password """
        if self.__password is None or pwd is None:
            return False
        return self.__password == pwd
