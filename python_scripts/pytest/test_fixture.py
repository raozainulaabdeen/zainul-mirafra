import pytest

#@pytest.fixture
def sample_data():
    return [1, 2, 3, 4]

def test_sum():
    assert sum(sample_data()) == 10
