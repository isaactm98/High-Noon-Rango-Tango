import abc


class Card:
    __metaclass__ = abc.ABCMeta

    def __init__(self, suit, value):
        self.suit = suit
        self.value = value
        self.used_ability = False
        self.revealed = False
        self.quick_modded = False

    @abc.abstractmethod
    def attack(self):
        return
